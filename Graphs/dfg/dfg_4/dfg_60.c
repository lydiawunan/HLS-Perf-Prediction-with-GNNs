//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531569220
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned long long p_7, unsigned char p_9, float p_11,
         unsigned long long p_13)
{
  short v_15;
  signed char v_5;
  unsigned long long v;
  char result;
  v_15 = (short)p_7;
  v = (unsigned long long)v_15;
  v = ! ((unsigned long long)((float)(- v) + p_11) + ~ (p_13 & 58485ULL));
  v_5 = (signed char)(- (~ (18446744073709551612ULL / ((unsigned long long)p_9 * v + 991ULL))));
  result = (char)((unsigned long long)((int)((p + p) - (double)(v + 26396ULL)) % 817597997) * (
                  ((unsigned long long)(- v_5) - ~ p_7) * 18446744073164540774ULL));
  return result;
}


