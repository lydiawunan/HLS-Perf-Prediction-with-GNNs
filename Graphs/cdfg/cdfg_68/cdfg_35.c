#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940283381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, double p_5, unsigned short p_7, char p_9,
         long long p_13)
{
  long long v_23;
  long v_21;
  unsigned long long v_19;
  long v_17;
  short v_15;
  long long v_11;
  char v;
  long result;
  v_21 = (long)p_13;
  v_19 = 41282ULL;
  v_17 = (long)p_9;
  v_15 = (short)10696;
  v_11 = (long long)p_9;
  while (p_5 - (double)p_7 == (double)v_15) {
    v_15 = v_19 * (unsigned long long)((float)v_17 * 2379559680.f);
    v_23 = (long long)v_15;
    v_19 = (unsigned long long)(((long long)((int)p / ((int)p + 571)) - (
                                 -3570LL + v_23)) % (long long)((int)p_9 + 952));
    v_15 = (short)((double)(- (18446744073285639609ULL % (unsigned long long)(
                               v_21 + 106L))) * - ((double)p_13 / (p_5 + 231.)));
  }
  while_0_break: ;
  if ((long long)p_5 >= (long long)((int)p_7 / ((int)p_9 + 815)) * - v_11 - p_13) {
    v = (char)-16;
    result = (long)v;
  }
  else result = (long)p;
  return result;
}


