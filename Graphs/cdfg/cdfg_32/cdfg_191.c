#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 738801307
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, long long p_13[3], unsigned char p_17,
                 unsigned int p_19, float p_21)
{
  int v_27;
  long v_25;
  float v_23;
  unsigned short v_15;
  unsigned int v_11;
  unsigned char v_8;
  unsigned int v_6;
  unsigned int v_4;
  long long v;
  unsigned int result;
  v_27 = (int)p_21;
  v_25 = -1049091261L;
  v_23 = 1.51583458134e+38f;
  v_15 = (unsigned short)16354;
  v_6 = (unsigned int)p_13[0];
  v_4 = 65127U;
  v = (long long)p;
  while ((unsigned int)(9 - (int)(~ (- p_17))) != 4294933512U + (p_19 * 153U) % (
                                                                (unsigned int)(
                                                                p_21 * v_23) + 956U)) {
    v_23 = (long)v_27 ^ (v_25 - -234145359L);
    v_6 = (unsigned int)((- p - (long)(~ p_17)) * -271343971L);
    v_4 = - (~ (v_6 / ((unsigned int)v_23 + 25U)));
    v_23 = (float)(~ (unsigned char)230);
  }
  while_0_break: ;
  if ((long long)(((unsigned long)p * 445492440UL - (unsigned long)(514094811 >> 25)) * (unsigned long)(- (
                  33L | p))) == p_13[0] + (long long)v_15) {
    v_8 = (unsigned char)(~ (- (4139266371UL >> (v_6 & 31U))));
    v_11 = (unsigned int)((long long)p * ((v * (long long)p) % 759886276LL));
    result = (unsigned int)(((v | (long long)v_4) * (long long)(v_6 / (unsigned int)(
                                                                (int)v_8 + 942))) * (long long)(
                            ((unsigned long)p ^ 4294940566UL) - (unsigned long)(
                            88U / (v_11 + 919U))));
  }
  else result = (unsigned int)(- (~ (p ^ p)));
  return result;
}


