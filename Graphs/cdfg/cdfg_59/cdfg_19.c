#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 35271395
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p)
{
  unsigned char v_17;
  long long v_15;
  char v_12;
  unsigned char v_10;
  long v_8;
  unsigned short v_6;
  long v_4;
  char v;
  unsigned long result;
  v_17 = (unsigned char)p;
  v_15 = (long long)p;
  v_12 = (char)p;
  v_10 = (unsigned char)125;
  v_8 = (long)p;
  v_6 = (unsigned short)9025;
  v = (char)-59;
  result = 312081658UL;
  while ((double)((float)((int)((unsigned char)2.33944433113e+38) << 2) / 1142.15356445f) - (
         (5589894484.52 - (double)v_15) + (double)((int)p | 193)) > (double)(- (- p)) * 1.18573520385e+38) {
    v = (unsigned int)v_17 * 859579353U;
    v_6 = (unsigned short)p;
    v_10 = (unsigned char)(- ((int)p << (60LL / (v_15 + 209LL) & 7LL)));
    v_15 = (long long)(- ((int)(- v_6) - ((int)p >> 3)));
  }
  while_0_break: ;
  while (- (- result) == (unsigned long)v) {
    v_4 = v_8 / -7225L;
    v_6 = (unsigned short)(- (((int)v_6 ^ (int)v_12) - (int)p));
    v_8 = ! ((long)v_10 / (v_4 + 522L)) + (long)(! (- v));
    v = (char)(87 & (int)v_10);
  }
  while_0_break_0: ;
  return result;
}


