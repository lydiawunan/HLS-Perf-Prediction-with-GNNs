#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 554224747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned long long p_11[3][4], short p_15,
                unsigned long long p_17)
{
  unsigned short v_19;
  signed char v_13;
  unsigned short v_9;
  unsigned char v_7;
  float v_5;
  unsigned int v;
  signed char result;
  v_19 = (unsigned short)16086;
  v_13 = (signed char)p_11[0][3];
  v_9 = (unsigned short)p;
  v_7 = (unsigned char)p_11[2][3];
  v_5 = 1882511744.f;
  result = (signed char)121;
  if ((int)p >> (((int)((unsigned short)-420.366644335) << 15) % ((int)(! v_19) + 363) & 7) > ~ (
      0 % ((int)v_13 + 713))) {
    v_7 = (unsigned char)((int)p | 6);
    result = (signed char)((int)v_13 * ((int)p - -99) - ! ((int)p_15 + 47716));
    v = (unsigned int)(- ((float)p_11[2][2] - -6812417024.f));
  }
  else {
    v_9 = (unsigned short)(! (! ((int)((unsigned char)8496256482.2) % (
                                 (int)v_7 + 753))));
    v_5 = (float)((- p_17 + 18446744073709551587ULL) % (- p_11[1][0] / (
                                                        (unsigned long long)(
                                                        v_5 - 51132.f) + 988ULL) + 771ULL));
    v = (unsigned int)p_15;
  }
  while (((v % 4294967200U) % (unsigned int)(((int)p - (int)((unsigned char)v_5)) + 1)) * (unsigned int)(- v_5) != 4294967283U) {
    v_5 = (long)v_7 % -25170L;
    result = (signed char)((unsigned long long)(- v_5) / (- (18446744072839753048ULL | p_11[0][3]) + 556ULL));
    v_7 = (unsigned char)199;
    v = (unsigned int)((int)v_9 + (int)(~ p));
  }
  while_0_break: ;
  return result;
}


