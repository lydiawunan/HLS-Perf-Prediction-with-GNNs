#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 674065431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned long long p_4, unsigned long p_7,
                 float p_13[5], char p_15)
{
  float v_25;
  short v_23;
  unsigned char v_21;
  unsigned long v_19;
  unsigned short v_17;
  char v_11;
  float v_9;
  float v;
  unsigned int result;
  v_23 = (short)p_13[3];
  v_21 = (unsigned char)p_4;
  v_19 = 4294910659UL;
  v_17 = (unsigned short)48202;
  v_11 = (char)p_7;
  v_9 = 1302533760.f;
  while ((int)v_17 % (- (-580 * (int)p) + 976) >= ~ ((int)((unsigned short)(
                                                     (float)v_11 * p_13[4])) / (
                                                     (int)v_17 + 306))) {
    v_25 = (int)v_21 / -111;
    v_21 = (unsigned char)((long)(~ v_11) / (((long)v_23 / -295141075L) % (
                                             (long)((float)p_4 / (v_25 + 765.f)) + 556L) + 385L));
    v = (float)v_19;
    v_17 = (unsigned short)(! (((int)((char)v) + (int)p_15) / ((int)p + 142)));
  }
  while_0_break: ;
  if ((unsigned long)v_9 < (2628752768UL & (unsigned long)(! p_15)) * 255UL) 
    result = 4294967003U;
  else {
    v_9 = (float)((((double)v_11 - 593.487750332) / (double)((p_13[3] - v_9) + 331.f)) * (double)(- (- p_13[2])));
    v = - ((float)(~ p_7) + - v_9);
    result = (unsigned int)(~ ((unsigned long long)p + p_4));
  }
  return result;
}


