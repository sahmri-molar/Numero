/* Created by Ville-Petteri Makinen 2003-2010
   Copyright (C) V-P Makinen
   All rights reserved */

#include "medusa.local.h"

/*
 *
 */
vector<mdsize>
medusa::uniqsize(vector<mdsize>& items) {
  mdsize sznan = medusa::snan();
  mdsize nelem = items.size();
  set<mdsize> bitset;
  vector<mdsize> mask; mask.reserve(nelem);
  for(mdsize i = 0; i < nelem; i++) {
    mdsize ind = items[i];
    if(ind == sznan) continue;
    set<mdsize>::iterator pos = bitset.find(ind);
    if(pos != bitset.end()) continue;
    items[mask.size()] = ind;
    bitset.insert(ind);
    mask.push_back(i);
  }
  items.resize(mask.size());
  return mask;
}
