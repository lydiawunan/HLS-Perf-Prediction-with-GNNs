#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 587090233
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned long long p_4, int p_7,
                       float p_11, long long p_13)
{
  unsigned long v_25;
  unsigned long long v_23;
  unsigned long v_21;
  signed char v_19;
  unsigned int v_17;
  float v_15;
  unsigned int v_9;
  unsigned char v;
  unsigned long long result;
  v_25 = 4294940964UL;
  v_23 = 680322349ULL;
  v_21 = p;
  v_19 = (signed char)p;
  v_17 = (unsigned int)p_11;
  if ((long long)(p_7 * 88 + (223 & p_7 % (p_7 + 749))) >= ((-4LL - p_13) << (
                                                            v_25 & 63UL)) % (long long)(
                                                           (21U / (v_17 + 987U) << (
                                                            (v_21 - 3762869884UL) & 31UL)) + 282U)) 
    v_9 = (unsigned int)p_11;
  else {
    v_17 = (unsigned int)((unsigned long long)(- (- p)) - ((unsigned long long)(
                                                           (int)v_19 >> (
                                                           v_21 & 7UL)) - 
                                                           79ULL / (v_23 + 35ULL)));
    v_15 = (float)(! (~ ((unsigned long)v_17 + 51989UL)));
    v_9 = 4294940454U * (unsigned int)((double)p_13 / 5043362157.74 + (double)v_15);
  }
  if (16577UL > (unsigned long)v_9) result = (unsigned long long)(! p);
  else {
    v = (unsigned char)(p - (unsigned long)(~ (- p_7)));
    result = p_4 / (unsigned long long)((int)(- (~ v)) + 649);
  }
  return result;
}


