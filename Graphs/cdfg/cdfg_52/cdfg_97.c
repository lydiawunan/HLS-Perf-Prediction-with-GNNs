#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175374215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, int p_7[3][4], long long p_11[5][1])
{
  long v_13;
  short v_9;
  unsigned long v_4;
  unsigned short v;
  long result;
  v_13 = (long)p_11[0][0];
  v = (unsigned short)10348;
  v_9 = (short)v_13;
  if ((long long)(16L % (- (913690683L / (long)((int)v_9 + 884)) + 1L)) < 
      p_11[4][0] / -18881LL) {
    v_4 = ! (! 3929660175UL);
    v = (unsigned short)((int)((unsigned short)(p - (double)(~ v_4))) & (int)v);
    result = (long)(~ (! ((unsigned long)v / (v_4 + 369UL))));
  }
  else result = (long)(p_7[2][2] % -75);
  return result;
}


