#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 573447836
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, short p_4[1][3][5], double p_13[2][5],
                  short p_15[3][3][1], long long p_17)
{
  signed char v_21;
  unsigned long v_19;
  unsigned char v_11;
  unsigned long long v_9;
  long v_7;
  char v;
  unsigned long result;
  v_21 = (signed char)70;
  v_19 = (unsigned long)p_17;
  v_11 = (unsigned char)36;
  v_9 = 213405017ULL;
  v_7 = 410356528L;
  v = (char)-100;
  result = (unsigned long)p_13[1][4];
  while (31083UL <= v_19) {
    v_7 = (int)v_21 << 1LL;
    v_7 = (long)((unsigned long)v_11 + ((unsigned long)p / (result + 138UL)) % (unsigned long)(
                                       v_7 + 666L));
    result = (unsigned long)p;
    v_19 = (100UL + v_19) + (unsigned long)((int)(- p) * (int)(~ p_4[0][2][2]));
  }
  while_0_break: ;
  while (- (31UL * ((unsigned long)v + result)) >= (unsigned long)(- (
         ((int)p << (v_7 & 7L)) - 184 * (int)p_4[0][1][4]))) {
    v_11 = v_9 * 5351833088ULL;
    v = (char)((long long)((double)((long long)p ^ -11816LL) * (p_13[1][4] / (
                                                                (double)p_15[1][1][0] + 738.))) + 
               (60085LL + p_17) / (long long)((int)p_4[0][1][0] + 241));
    v_7 = (long)(- (- (4294931202UL & (unsigned long)p_4[0][0][4])));
    result = (unsigned long)((long long)((int)(- p_4[0][1][3]) / ((int)p * (int)p_4[0][0][3] + 560)) | 
                             -582967275LL * (long long)((int)p_4[0][1][3] & (int)v_11));
  }
  while_0_break_0: ;
  return result;
}


