#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 609878075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, char p_7, unsigned long long p_15[2][3],
                  unsigned int p_17, unsigned short p_19)
{
  short v_21;
  unsigned char v_13;
  char v_11;
  signed char v_9;
  unsigned long v_5;
  unsigned int v;
  unsigned long result;
  v_21 = (short)5882;
  v_13 = (unsigned char)195;
  v_9 = (signed char)p_15[0][2];
  v = p_17;
  result = 4294953640UL;
  v_11 = (char)((unsigned long long)((unsigned long)(224U * p_17) * ! result) * (
                (unsigned long long)((int)p_19 << 5L) / ((p_15[0][1] + (unsigned long long)p_7) + 365ULL)) & (
                18446744072737079224ULL + (338987141ULL / (unsigned long long)(
                                           (int)v_21 + 678) + (unsigned long long)(
                                           4294954486UL * (unsigned long)p_17))));
  v_5 = (unsigned long)v;
  v = (unsigned int)((unsigned long long)(~ ((unsigned long)(~ p) * ~ v_5)) + (
                     ((unsigned long long)p_7 % 18446744073335257086ULL >> (
                      (int)v_9 & 63)) - ((unsigned long long)v_11 & (
                                         (unsigned long long)v_13 + p_15[1][0]))));
  result = (unsigned long)((unsigned long long)((unsigned long)(107U % (
                                                                v + 383U)) % 4200328525UL + 30786UL) % 53640ULL);
  return result;
}


