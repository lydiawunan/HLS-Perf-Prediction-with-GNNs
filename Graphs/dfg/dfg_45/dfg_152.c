#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 544155877
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long long p_13, unsigned long p_15)
{
  unsigned long v_11;
  unsigned short v_8;
  unsigned char v_6;
  long v_4;
  double v;
  long long result;
  v_11 = (unsigned long)p_13;
  v_4 = -35873L;
  v = 2.16036701009e+38;
  v_6 = (unsigned char)(((unsigned long)(-109 << (p_13 & 7LL)) % (p_15 + 52UL)) * 901585057UL - 4294967295UL);
  v_8 = (unsigned short)(- p_13);
  v_4 = (long)((unsigned long long)p_13 * (((unsigned long long)p + 18446744073709490908ULL) & (unsigned long long)(
                                           -12330L / (v_4 + 322L))) - (unsigned long long)(
               (3352198999LL + ! p_13) % (long long)(p_15 + 798UL)));
  result = (long long)((unsigned long)((v * -3290214144. - (double)((long long)v_4 % 884571189LL)) - (double)(
                                       (unsigned int)(! v_6) - (unsigned int)v_8 % (
                                                               p + 207U))) * - (
                       v_11 & 29273UL));
  return result;
}


