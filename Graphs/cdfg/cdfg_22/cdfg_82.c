#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 464269194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p[2][1][5], long p_4, unsigned int p_6,
                long long p_8, unsigned char p_10)
{
  signed char result;
  result = (signed char)26;
  if ((long long)p_6 * (((long long)result % (p_8 + 583LL)) % 1321LL) > (long long)(
      (int)(~ (! p_10)) % ((int)p[1][0][4] + 198))) {
    result = (signed char)(! (- ((unsigned int)p[0][0][1] & 1053482525U)));
    result = (signed char)(0 / (long long)(~ (-13 >> ((int)result & 7)) + 268));
  }
  else result = (signed char)p_4;
  return result;
}


