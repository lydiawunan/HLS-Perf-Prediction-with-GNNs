#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 48315752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, float p_9, short p_13)
{
  signed char v_23;
  long v_21;
  float v_19;
  unsigned long long v_17;
  unsigned long long v_15;
  float v_11;
  unsigned long long v_6;
  int v_4;
  unsigned long v;
  unsigned short result;
  v_23 = (signed char)74;
  v_21 = (long)p_13;
  v_19 = (float)p;
  v_17 = 16907ULL;
  v_15 = 18446744073266967797ULL;
  v_11 = 819.50390625f;
  v_6 = 21312ULL;
  if (- (-458.226226807f / ((float)p_13 + 981.f)) >= ((float)(p - (unsigned long)v_23) / (
                                                      778.494018555f / (
                                                      (float)v_6 + 179.f) + 511.f)) * (float)(
                                                     (unsigned long long)(
                                                     47934 | (int)v_23) * ~ v_15)) {
    v_6 = (unsigned long long)((float)p - (v_11 + 49572.f));
    v = (unsigned long)p_9;
    v_4 = (int)((626376345ULL ^ v_6 / (v_6 + 290ULL)) * (unsigned long long)(
                ! v & ! p));
  }
  else {
    v_15 = (unsigned long long)(! (! ((long)v_19 / (v_21 + 504L))));
    v_4 = (int)(! (- v_17));
    v = (unsigned long)((unsigned long long)(p | p) - ~ ((unsigned long long)p_13 & v_15));
  }
  result = (unsigned short)(4148UL % (v % (unsigned long)(v_4 + 633) + 399UL) ^ (
                            ~ v + 56589UL));
  return result;
}


