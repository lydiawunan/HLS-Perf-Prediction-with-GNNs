#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 500244468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, float p_4, float p_6, short p_8, long p_19)
{
  long long v_21;
  signed char v_17;
  long long v_15;
  int v_13;
  unsigned int v_11;
  unsigned int v;
  unsigned short result;
  v_21 = -154388903LL;
  v_17 = (signed char)p_8;
  v_15 = (long long)p_6;
  v_13 = (int)p_6;
  v_11 = (unsigned int)p_4;
  v = (unsigned int)p_6;
  result = (unsigned short)p;
  while (24068.f / (p_6 + 429.f) + (float)(- ((long long)p | v_15)) != 0.f) {
    v_11 = v_21 + 260951347LL;
    v_21 = (long long)(~ 9348UL);
    v_13 = (int)(- (~ v_11));
    v_15 = 1071720555LL * (long long)(! (! p));
  }
  while_0_break: ;
  while (((double)(p_6 * (float)p_8) - (745.615372554 + (double)result)) * (double)(
         (unsigned long)6.29248675799e+37f / 4294939488UL) > (double)v) {
    v_11 = v_15 - (long long)((unsigned long)v_13 - (unsigned long)v_11 % 4294935298UL);
    v_17 = (signed char)((unsigned long)((-34L - p_19) / (long)(((int)v_17 | -39) + 48)) * (unsigned long)v);
    v_13 = (int)p_19;
    v = (unsigned int)((6 * (8 * v_13)) % 177);
  }
  while_0_break_0: ;
  return result;
}


