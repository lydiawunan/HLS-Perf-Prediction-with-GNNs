#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 433513028
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, char p_11, long long p_13)
{
  short v_17;
  long long v_15;
  signed char v_9;
  double v_6;
  long v_4;
  unsigned int v;
  char result;
  v_17 = (short)32160;
  v_15 = -817463154LL;
  v_9 = (signed char)p_13;
  v_4 = (long)p;
  v = 886540455U;
  v_6 = (double)((long long)(~ (187 * (int)p_11 >> (! p_13 & 31LL))) - 
                 ~ (! v_15) / (((long long)v_17 | v_15) % -540LL + 931LL));
  v_6 = (double)(38824 + ! ((int)((double)p / (v_6 + 252.)) / (((int)p - (int)v_9) + 675)));
  result = (char)((unsigned long)((double)((long long)v - -31943LL * (long long)v_4) + 
                                  (v_6 * 60664.) / (- v_6 + 462.)) % 3262366268UL);
  result = (char)(! (! ((18446744073203864713ULL % (unsigned long long)(
                         (int)result + 133)) * (unsigned long long)((int)((unsigned short)-6015044112.21) + 13049))));
  return result;
}


