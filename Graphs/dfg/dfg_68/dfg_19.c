#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 169863621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, long long p_4[2][1][2], unsigned long long p_13,
                short p_15[2][5], char p_17)
{
  signed char v_19;
  unsigned long v_11;
  unsigned char v_9;
  char v_7;
  float v;
  signed char result;
  v_19 = (signed char)-88;
  v_11 = 4294934056UL;
  v_9 = (unsigned char)p;
  v_7 = p;
  v = -1.03175968617e+38f;
  v = (float)(- ((long long)(- (v / (v + 317.f))) % (! (9502LL + p_4[1][0][0]) + 807LL)));
  v = (float)(! ((((long long)p_17 % (p_4[1][0][1] + 337LL)) / (long long)(
                  (unsigned long)v / (v_11 + 566UL) + 410UL)) * (long long)v_19));
  v_11 = (unsigned long)((4294931466ULL + - p_13 % (unsigned long long)(
                                          ((long)p + -1001438241L) + 905L)) / (unsigned long long)(
                         - (((int)p_15[0][4] + -25501) - (int)(~ v_7)) + 637));
  result = (signed char)((unsigned long)(((int)p * (64576 >> (p_4[1][0][0] & 15LL))) / (
                                         ((int)((char)v) / ((int)v_7 + 677)) / (
                                         (int)v_9 + 425) + 639)) % ((
                                                                    v_11 / 32181506UL + 706738285UL) + 352UL));
  return result;
}


