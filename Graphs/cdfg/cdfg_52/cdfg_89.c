#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 53244097
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned int p_13[4][4][1], long long p_21)
{
  unsigned short v_19;
  double v_17;
  float v_15;
  unsigned short v_11;
  unsigned char v_9;
  unsigned short v_7;
  unsigned short v_5;
  unsigned int v;
  int result;
  v_17 = (double)p;
  v_15 = -148.924453735f;
  v_9 = (unsigned char)20;
  v_7 = (unsigned short)57241;
  v_5 = (unsigned short)59025;
  v = 745918432U;
  result = -738508715;
  while ((unsigned long long)(~ ((unsigned int)((int)p + 9673) + p_13[2][0][0] % (unsigned int)(
                                                                 (int)p + 639))) > 
         ((unsigned long long)(241 * (int)((unsigned char)-6947258880.f)) / (
          (412849159ULL - (unsigned long long)v_5) + 841ULL)) % (unsigned long long)(
         (long long)(~ p) % -28832LL + 295LL)) {
    result = v_15 - -839.167297363f;
    v_15 = (float)((unsigned int)(~ ((int)p % -30)) % (p_13[1][0][0] + 183U));
    v_19 = (unsigned short)(- ((long long)(p_13[1][3][0] | 4294967175U) + - p_21));
    v_5 = (unsigned short)((long long)(((unsigned int)v_17 - 4294944256U) ^ 
                                       (unsigned int)v_19 * 22151U) - (
                           (long long)(! p_13[1][2][0]) + ! p_21));
  }
  while_0_break: ;
  while ((float)(~ ((unsigned int)((int)p + result) / ((v - (unsigned int)p) + 124U))) < 
         ((float)((long long)v_5 / -4785LL) + 7005976576.f) / ((float)(- (
                                                               58970ULL % (unsigned long long)(
                                                               (int)p + 467))) + 790.f)) {
    v_7 = (unsigned long)v_9 + ((unsigned long)v_7 - 3250843967UL);
    v_5 = (unsigned short)((0 ^ 18446744073709513156ULL) % 341ULL);
    v_11 = ~ (! (~ v_5));
    v = (unsigned int)(~ v_11);
  }
  while_0_break_0: ;
  return result;
}


