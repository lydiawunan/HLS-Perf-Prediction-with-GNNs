#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164211705
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, float p_17)
{
  long long v_19;
  unsigned int v_15;
  char v_13;
  unsigned short v_11;
  float v_9;
  unsigned int v_7;
  unsigned long v_4;
  float v;
  long long result;
  v_19 = -799798312LL;
  v_15 = 941193084U;
  v_13 = (char)p_17;
  v_9 = p_17;
  v_7 = 25223U;
  v_4 = (unsigned long)p;
  v = -893.751647949f;
  result = -46103LL;
  while ((double)(~ ((unsigned long)((int)v_13 * (int)((char)p_17)) % (
                     3240924953UL / (unsigned long)(v_7 + 420U) + 224UL))) != 
         -9.68803011706e+21 * (double)(- ((float)p / 740323520.f))) {
    v = v_19 + 199LL;
    v_15 = (unsigned int)((float)v_7 - p_17);
    v_4 = (unsigned long)(- (- (- -79.6071395874f)));
    v_7 = - (- ((unsigned int)v_13 | 1046135388U));
  }
  while_0_break: ;
  while ((unsigned long)((int)((signed char)((1.84467440737e+19f * v) * (float)v_4)) + -7) != 
         (unsigned long)((unsigned int)(- p) - v_7) * 50444UL) {
    v_9 = (int)((short)v_9) + 4118;
    v_7 = (unsigned int)((float)(53413 / (((int)p + (int)p) + 869)) / (
                         - ((float)p - v) + 207.f));
    v_11 = (unsigned short)(65535U % (((unsigned int)v_13 * v_15 - (unsigned int)(
                                       p_17 + (float)p)) + 444U));
    v = (float)(v_7 % (- ((unsigned int)v_11 / 4294955092U) + 157U));
  }
  while_0_break_0: ;
  return result;
}


