#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 338836737
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, char p_5[2][1][2], unsigned char p_7)
{
  signed char v_17;
  long long v_15;
  short v_13;
  char v_11;
  short v_9;
  long v;
  unsigned long long result;
  v_17 = (signed char)-36;
  v_15 = 15833LL;
  v_13 = (short)-6610;
  v_9 = (short)p_7;
  result = 18446744073463108122ULL;
  v_11 = (char)(! (! (~ (-252859954L >> ((int)v_17 & 31)))));
  v_15 /= (v_15 % (long long)(~ p + 485UL)) * (long long)(~ (p * (unsigned long)v_9)) + 9LL;
  v = (long)((unsigned long long)(! ((int)v_9 * 637)) % (unsigned long long)(
             (((long long)((int)v_11 / ((int)v_13 + 644)) + - v_15) ^ -30975LL) + 517LL));
  result = (unsigned long long)(- (p * (unsigned long)(v ^ 31L))) * (
           (18446744073709492681ULL | (unsigned long long)((int)p_5[0][0][1] % (
                                                           (int)p_7 + 1017))) - (unsigned long long)2.54647030346e+38);
  return result;
}


