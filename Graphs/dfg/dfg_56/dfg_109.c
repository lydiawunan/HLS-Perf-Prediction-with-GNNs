#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 551080772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, long p_7, short p_9, int p_11, char p_15)
{
  float v_19;
  signed char v_17;
  unsigned short v_13;
  signed char v_5;
  unsigned long v;
  long result;
  v_19 = 3.35703491258e+38f;
  v_17 = (signed char)p_15;
  v_13 = (unsigned short)12294;
  v_5 = (signed char)-113;
  v = (unsigned long)p_9;
  result = (long)((~ (v - 204UL) + (unsigned long)((int)v_5 % -58989263)) - (unsigned long)(- v_19));
  v = (unsigned long)((int)(- v_5) % (((int)p_15 ^ (int)v_17) + 1013)) * (
      (unsigned long)((int)p_15 * p_11) / (p / (unsigned long)((int)v_5 + 986) + 103UL)) - (
      (unsigned long)((int)((double)p_9 + -2.05956906854e+38) * ((int)v_17 % (
                                                                 (int)((signed char)474.768432617f) + 162))) + 1000608814UL);
  v_5 = (signed char)(((unsigned long)(~ p_7 * (long)p_11) % ((((unsigned long)v_13 | 4294941542UL) + 
                                                               v % (unsigned long)(
                                                               result + 165L)) + 949UL)) / (unsigned long)(
                      ((long)(~ p_15) * result) % (long)((int)(- v_5) * 44 + 450) + 694L));
  result = (long)(- ((p - (unsigned long)-5476429824.f) % (v * 999948462UL + 921UL) << (
                     ((unsigned long)(47640U / (unsigned int)((int)v_5 + 497)) + (unsigned long)(
                      p_7 % (long)((int)p_9 + 517))) & 31UL)));
  return result;
}


