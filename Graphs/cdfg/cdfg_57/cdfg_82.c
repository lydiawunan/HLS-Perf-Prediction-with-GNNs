#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264235129
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[1][1][2], signed char p_9, long long p_11[4][5][4],
                  unsigned long long p_13, int p_17[1][4])
{
  unsigned int v_21;
  signed char v_19;
  int v_15;
  unsigned long long v_6;
  int v_4;
  signed char v;
  unsigned long result;
  v_21 = (unsigned int)p[0][0][0];
  v_19 = (signed char)85;
  v_15 = (int)p_11[1][3][1];
  v_6 = (unsigned long long)p_17[0][1];
  v_4 = -43541;
  v = (signed char)p_11[3][1][2];
  if ((unsigned long long)v_21 - - (v_6 + (unsigned long long)p_9) <= (unsigned long long)(- p_17[0][1])) {
    v_6 = (unsigned long long)v % 609544210ULL;
    v_4 = (int)(- (p_13 % (unsigned long long)(v_15 % -1391 + 134)));
    result = (unsigned long)((long long)(((int)p_9 - (int)p_9) % ((int)(~ p_9) + 569)) | 
                             (long long)((int)p_9 << (v_4 & 7)) % (~ p_11[1][0][3] + 787LL));
  }
  else {
    v_6 = (unsigned long long)((long)((int)(! p_9) * (int)(! p_9)) * (
                               ! p[0][0][1] + (long)(904 - (int)v_19)));
    v_4 = (int)(~ (((unsigned long)p_17[0][1] * 4140578988UL) * (unsigned long)(! v_4)));
    result = (unsigned long)p[0][0][0];
  }
  while (((unsigned long)(- ((unsigned int)v + 50408U)) | result) == (unsigned long)v_4) {
    result = v_6 * (unsigned long long)-3.72968869299e+37;
    v_6 = (unsigned long long)((int)(~ (! p_9)) - (int)(! p_9));
    v_4 = (int)(- 2.45270920031e+38f);
    v = (signed char)(((long long)2.81833747355e+19f + 127531112LL) * (long long)p[0][0][0]);
  }
  while_0_break: ;
  return result;
}


