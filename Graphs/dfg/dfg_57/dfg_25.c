#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226831291
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, int p_15, long long p_17[4])
{
  double v_19;
  unsigned long long v_12;
  long long v_10;
  unsigned long long v_8;
  unsigned short v_6;
  unsigned int v_4;
  int v;
  signed char result;
  v_19 = 3.40065074879e+38;
  v_12 = 18446744073050080311ULL;
  v_10 = -979172897LL;
  v_6 = (unsigned short)p_17[0];
  v_4 = (unsigned int)p_17[1];
  v = p_15;
  v_8 = (unsigned long long)(! (31341 * ((-70 | v) % ((int)v_19 + 233))));
  v_4 = (unsigned int)(((((unsigned long long)v_4 * v_8) * (unsigned long long)(
                         612LL % (v_10 + 350LL))) * ~ (v_12 * (unsigned long long)p)) * (unsigned long long)(
                       (p / (long long)(p_15 + 277)) * 3032175616LL + p_17[2]));
  v = (int)(((unsigned long)v_4 - 4294956028UL) / (unsigned long)((int)v_6 + 150));
  result = (signed char)((int)-2.07019474434e+37f / (! v + 586));
  return result;
}


