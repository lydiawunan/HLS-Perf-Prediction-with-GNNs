#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 355218337
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long long p_15)
{
  double v_13;
  char v_11;
  unsigned long long v_9;
  double v_6;
  unsigned short v_4;
  int v;
  long result;
  v_13 = -555.653701349;
  v_11 = (char)p_15;
  v_9 = 18446744073112609340ULL;
  v_6 = -1302975540.99;
  v = (int)p_15;
  result = 233429050L;
  v_4 = (unsigned short)207;
  while ((long long)(! (! (57 & v))) != (445149475LL - (long long)(-112 - (int)v_4)) * (long long)(
                                        ((int)v_4 - (int)((unsigned short)v_6)) + (int)p)) {
    v_9 /= 50921ULL;
    v_6 = (double)(! ((unsigned long long)((int)v_13 % (v + 380)) / (
                      p_15 % (unsigned long long)(result + 207L) + 982ULL)));
    v_11 = (char)(((long)v_11 - result) * (long)((int)(! v_4) - (int)p));
    v = (int)(! p);
  }
  while_0_break: ;
  return result;
}


