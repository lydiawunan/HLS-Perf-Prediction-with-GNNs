#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375469130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned short p_5, int p_7, int p_9, float p_15)
{
  int v_27;
  unsigned long long v_25;
  long v_23;
  unsigned short v_21;
  long long v_19;
  unsigned long long v_17;
  int v_13;
  long long v_11;
  signed char v;
  char result;
  v_27 = p_7;
  v_25 = 18446744073709542816ULL;
  v_23 = (long)p;
  v_21 = (unsigned short)56146;
  v_19 = 61538LL;
  v_17 = (unsigned long long)p_15;
  v_13 = 973830167;
  v_11 = -756716872LL;
  v = (signed char)p_5;
  while ((unsigned long long)(~ ((51229U + (unsigned int)p) / (unsigned int)(
                                 30812 % (p_7 + 773) + 521))) == (unsigned long long)(
                                                                 (long)(~ p_5) + 
                                                                 51079L / (
                                                                 v_23 + 432L)) * ! (
                                                                 383ULL & v_25)) {
    v_19 = (unsigned int)v_27 % 12252U;
    v_21 = (unsigned short)((unsigned long)((int)(- v) * (int)p) % ((
                                                                    4294916149UL - (unsigned long)-1.59753377587e+38) / (unsigned long)(
                                                                    v_13 + 700) + 736UL));
    v_25 = 81ULL;
    v_23 = (long)((~ p_9 + ! p_9) & -1);
  }
  while_0_break: ;
  if ((float)v_21 > - ((float)v * (1.91553526103e+38f + (float)v_21))) {
    v = (signed char)((18446744072940804179ULL - (unsigned long long)(
                       v_11 * 120LL)) & (unsigned long long)v_13);
    v = (signed char)(! p_9 | ((int)(~ v) + 42));
    result = (char)(((long long)((int)v * -15223) + -56479LL) >> (((int)p / (
                                                                   (int)p_5 + 104) >> (
                                                                   p_7 & 31)) & 63));
  }
  else {
    v_13 = (int)((- v_17 % (unsigned long long)(v_19 + 702LL)) % (unsigned long long)(
                 ! (~ p_7) + 373));
    v_17 = (unsigned long long)(! v_13);
    result = (char)(((p_15 - -21990.f) + (float)v_17) + 46360.f);
  }
  return result;
}


