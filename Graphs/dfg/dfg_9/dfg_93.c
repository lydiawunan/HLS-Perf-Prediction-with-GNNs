//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 220769434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[3])
{
  float v_17;
  unsigned long long v_14;
  unsigned short v_12;
  unsigned long long v_10;
  unsigned long v_8;
  short v_6;
  long v_4;
  short v;
  unsigned int result;
  v_17 = -4.78371405532e+36f;
  v_14 = (unsigned long long)p[1];
  v_12 = (unsigned short)p[1];
  v_10 = (unsigned long long)p[2];
  v_8 = 4294958645UL;
  v_6 = (short)p[1];
  v_4 = (long)v_10;
  v = (short)(((unsigned long long)((unsigned long)v_6 / (v_8 + 465UL)) * (
               v_10 % (unsigned long long)((int)v_12 + 265))) * ((v_14 - (unsigned long long)p[2]) % (
                                                                 (unsigned long long)v_17 + 340ULL)));
  result = (unsigned int)v;
  result = result;
  return result;
}


