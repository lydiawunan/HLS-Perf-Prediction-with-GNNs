#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844009797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, int p_7, float p_9, unsigned long p_11,
                int p_13[2][4][1])
{
  char v_19;
  long long v_17;
  long v_15;
  long long v_4;
  unsigned short v;
  signed char result;
  v_19 = (char)43;
  v_17 = p;
  v_15 = (long)p;
  v = (unsigned short)55840;
  result = (signed char)1;
  if ((int)v == (int)result + (int)((signed char)((float)(~ v_19) - p_9))) {
    v_15 = (long)(((long long)(v_15 % (v_15 + 69L)) + ! p) * p);
    result = (signed char)1;
    v_4 = ((long long)(p_11 + (unsigned long)p_13[0][2][0]) & - p) / (
          - ((long long)v_15 - v_17) + 608LL);
  }
  else {
    v_4 = (long long)(! (~ (- -314972283L)));
    result = (signed char)-21;
  }
  if (! ((18982LL + v_4) + 324942440LL) <= ((p - (long long)result) % (long long)(
                                            (p_7 << 9UL) + 147)) * (long long)(~ (
                                           -574550362 - (int)p_9))) result = (signed char)(! (! 44535UL));
  else {
    v = (unsigned short)48281;
    result = (signed char)v;
  }
  return result;
}


