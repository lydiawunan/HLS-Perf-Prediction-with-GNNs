#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576766040
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, signed char p_7, unsigned long long p_9,
              short p_11, unsigned char p_15)
{
  long long v_21;
  signed char v_19;
  long v_17;
  char v_13;
  unsigned int v_4;
  int v;
  long long result;
  v_21 = (long long)p_11;
  v_19 = (signed char)p_15;
  v_13 = (char)p;
  v_4 = 46923U;
  v = 13734;
  while ((unsigned long long)(~ (-133295706 - (int)v_19) << ((int)p_15 & 31)) <= 
         - (- p_9) - (unsigned long long)p_15) {
    v_4 = (unsigned int)(~ (p_9 * (unsigned long long)p) / (unsigned long long)(
                         p % (long long)((int)v_19 + 168) + 358LL));
    v_13 = (char)((unsigned long long)(! (! p_7)) / ((unsigned long long)v_4 / 34284ULL + 858ULL));
    v_19 = (signed char)(- (! (- v_21)));
  }
  while_0_break: ;
  if ((long long)(~ ((v - (int)v_13) * (int)((float)v - -385.137786865f))) > p) {
    result = (long long)((750894087ULL >> 13) + (unsigned long long)(! v));
    v = (int)((long long)((int)p_7 >> (p_9 * 18446744073709504643ULL & 7ULL)) | 
              result % (long long)((int)p_11 + 612));
    result = - ((long long)(! v) % (((long long)v_4 ^ p) + 243LL));
  }
  else {
    v_17 = (long)(~ v_19);
    v_13 = (char)(~ ((long)(! p_7) / ((v_17 + 931985078L) + 819L)));
    result = (long long)((int)v_13 + ! (23 + (int)p_15));
  }
  return result;
}


