/* Created by Ville-Petteri Makinen 2003-2010
   Copyright (C) V-P Makinen */

#ifndef scriptum_local_INCLUDED
#define scriptum_local_INCLUDED

#include <cstdlib>
#include <cstdio>
#include <cfloat>
#include <cctype>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include "medusa.h"
#include "abacus.h"
#include "scriptum.h"

#define SAFETY_scriptum 65535
#define MINCOORD_scriptum -499990
#define MAXCOORD_scriptum 499990

using namespace std;
using namespace medusa;
using namespace abacus;
using namespace scriptum;

/* Encapsulate with redundant namespace in case in a collection
   of modules another module has the same class name(s) in use. */
namespace scriptum_local {

  /*
   *
   */
  class Limes {
  public:
    mdreal alpha;
    mdreal omega;
  public:
    Limes();
    ~Limes();
    bool update(const mdreal);
    bool update(const vector<mdreal>&, const Style&);
  };

  /*
   *
   */
  class FrameBuffer {
  private:
    char bytes[SAFETY_scriptum];
    string data;
  public:
    mdsize ngroups;
    Style style;
    string linestycode;
    string textstycode;
    pair<Limes, Limes> limits;
  public:
    FrameBuffer();
    FrameBuffer(const void*);
    ~FrameBuffer();
    void append(const string&);
    char* f();
    string flush();
  };

  /*
   *
   */
  class ArtistBuffer {
  public:
    mdsize ngroups;
    unsigned long counter;
    unsigned long filesize;
    unsigned long prosize;
    pair<Limes, Limes> limits;
    FILE* output;
  public:
    ArtistBuffer() {
      this->ngroups = 0;
      this->counter = 0;
      this->filesize = 0;
      this->prosize = 0;
      this->output = NULL;
    };
    ArtistBuffer(const void* ptr) {
      ArtistBuffer* p = (ArtistBuffer*)ptr;
      if(p->output != NULL)
	panic("Cannot copy active object.\n", __FILE__, __LINE__);
      this->ngroups = p->ngroups;
      this->counter = p->counter;
      this->filesize = p->filesize;
      this->prosize = p->prosize;
      this->limits = p->limits;
      this->output = p->output;
    };
    ~ArtistBuffer() {
      if(output != NULL) panic("File not closed.\n", __FILE__, __LINE__);
    };
    string prolog(const Color&) const;
  };

  /* Utility functions. */
  extern void style2code(string&, string&, const Style&);
};

using namespace scriptum_local;

#endif /* scriptum_local_INCLUDED */
