#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 110076329
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned int p_11)
{
  signed char v_13;
  long long v_8;
  unsigned int v_6;
  unsigned char v_4;
  long v;
  char result;
  v_13 = (signed char)-23;
  v_6 = p_11;
  v_8 = -2LL;
  v_4 = (unsigned char)((long long)v_6 % (((long long)(p_11 ^ 4294967283U) - 488970994LL) + 111LL) - (
                        ~ (18129LL % (long long)((int)v_13 + 358)) + v_8));
  v = (long)(((long long)((unsigned int)v_4 + v_6) * -32891LL) * v_8 & (long long)p);
  result = (char)((unsigned long long)((unsigned long)(! v) / 542UL + 4294925766UL) / 18446744073709495183ULL);
  return result;
}


