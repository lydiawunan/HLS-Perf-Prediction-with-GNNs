#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 53241505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned int p_11, signed char p_13[1][5][1],
         long long p_15, unsigned char p_19)
{
  unsigned long long v_21;
  unsigned short v_17;
  unsigned short v_9;
  unsigned short v_7;
  short v_4;
  unsigned int v;
  char result;
  v_21 = 48617ULL;
  v_17 = (unsigned short)28534;
  v_9 = (unsigned short)p_11;
  result = (char)-25;
  v = (unsigned int)(601965632.f - - ((19044.f * p) / ((float)v_21 + 421.f)));
  v_7 = (unsigned short)(- p_15 - (long long)(((-470362174L + (long)v_17) - (long)(
                                               (int)result % ((int)p_19 + 757))) * (long)(- (
                                              (int)p_19 / ((int)p_13[0][3][0] + 56)))));
  v_4 = (short)((unsigned int)((int)v_7 + (int)((unsigned short)p)) % (
                ((unsigned int)((int)((unsigned short)p) + (int)v_9) + 
                 (unsigned int)2.75922265331e+38f / (p_11 + 575U)) * (unsigned int)(~ p_13[0][1][0]) + 580U));
  result = (char)(4294967296.f + (float)(! (v / (unsigned int)((int)v_4 + 283))) * p);
  return result;
}


