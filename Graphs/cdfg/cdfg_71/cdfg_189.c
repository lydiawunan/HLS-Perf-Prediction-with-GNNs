#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847919152
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned int p_4, short p_13, float p_15)
{
  unsigned long v_19;
  unsigned char v_17;
  int v_11;
  char v_9;
  signed char v_7;
  int v;
  int result;
  v_19 = (unsigned long)p;
  v_17 = (unsigned char)237;
  v_11 = 51579;
  v_9 = (char)-99;
  v_7 = (signed char)86;
  v = (int)p;
  result = (int)p_4;
  while ((unsigned long)((((int)v_7 + 181) + (int)v_7) / ((int)((double)(
                                                                (float)p_13 - p) + -2.45192130932e+38) + 500)) >= 
         (unsigned long)(- (~ v)) - 582162087UL) {
    v_9 = (char)(0 % ((int)(- (-1173.f - p)) + 972));
    v_11 = (int)((float)((unsigned int)(- v_17) * (p_4 * (unsigned int)v_11)) / (
                 ((float)v_7 - - p_15) + 219.f));
    v_7 = (signed char)(- (((float)p_4 - p_15) / ((float)(~ v_19) + 69.f)));
  }
  while_0_break: ;
  while ((unsigned int)p - (unsigned int)((int)((char)-3.03634042284e+38) + 11) / (
                           (p_4 & (unsigned int)v) + 341U) >= (unsigned int)(
         - (- p) - (p + 4220878592.f) * (float)v_7)) {
    result = (long long)v_11 % (((long long)v_9 | -1049959468LL) + 96LL);
    v_11 = (int)(-16.f - - (- p_15));
    v = (int)(((float)(~ v) + (p - (float)p_4)) - ((float)p_13 - p) / (
                                                  (float)(! v_11) + 116.f));
    v_7 = (signed char)(1.84467440737e+19f / (((62863.f - p) - (float)(~ v)) + 304.f));
  }
  while_0_break_0: ;
  return result;
}


