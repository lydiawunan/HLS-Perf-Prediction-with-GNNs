#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305427907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p)
{
  signed char v_13;
  long long v_11;
  char v_8;
  char v_6;
  long long v_4;
  unsigned int v;
  unsigned long long result;
  v_13 = (signed char)p;
  v_11 = 3437LL;
  v_8 = (char)20;
  v_6 = (char)p;
  v_4 = p;
  v = (unsigned int)p;
  result = 18446744073709537895ULL;
  while ((long long)v_6 * ((long long)((unsigned long)v_8 * 3393795372UL) * (
                           p * p)) == (long long)v_6) {
    v_6 = (long long)v_13 - (v_11 & -28596LL);
    v_11 = (long long)((unsigned long long)(! v) % (21667ULL % (result + 722ULL) + 379ULL) + (unsigned long long)(
                       (long long)((unsigned int)v_6 + v) / (~ p + 472LL)));
    v_13 = (signed char)-41;
    v_6 = (char)(! (p / -32454LL + 16266LL));
  }
  while_0_break: ;
  result = (unsigned long long)v / 458ULL;
  return result;
}


