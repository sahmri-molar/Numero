/* Created by Ville-Petteri Makinen 2003-2010
   Copyright (C) V-P Makinen */

#include "scriptum.local.h"

/*
 *
 */
Style::Style() {
  (this->anchor) = "start";
  (this->angle) = 0.0;
  (this->fillcolor).red = 0.7;
  (this->fillcolor).green = 0.7;
  (this->fillcolor).blue = 0.7;
  (this->fillcolor).opacity = 1.0;
  (this->fontfamily) = "Helvetica";
  (this->fontsize) = 10.0;
  (this->fontweight) = 500;
  (this->identity) = medusa::snan();
  (this->origin).resize(2, 0.0);
  (this->padding) = 0.0;
  (this->strokecolor).red = 0.0;
  (this->strokecolor).green = 0.0;
  (this->strokecolor).blue = 0.0;
  (this->strokecolor).opacity = 1.0;
  (this->strokewidth) = 1.0;
}

/*
 *
 */
Style::~Style() {}
