#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253180404
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned int p_5, unsigned int p_7, char p_19, char p_21)
{
  int v_29;
  signed char v_27;
  unsigned char v_25;
  short v_23;
  signed char v_17;
  int v_15;
  unsigned short v_13;
  short v_11;
  char v_9;
  unsigned long long v;
  int result;
  v_29 = (int)p_7;
  v_27 = (signed char)p_21;
  v_25 = (unsigned char)p;
  v_23 = (short)p;
  v_17 = (signed char)-123;
  v_15 = 224793336;
  v_9 = p_19;
  result = 12584;
  if ((unsigned long)((unsigned int)v_27 * ! p_5) - ((unsigned long)(- v_17) & 
                                                     4099356815UL / (unsigned long)(
                                                     p_7 + 810U)) >= (unsigned long)p_7) {
    v_9 = (char)(((unsigned long)p_5 & 4294931567UL) % 14363UL - 4294946017UL);
    v_29 = - (! ((int)v_23 / (v_15 + 635)));
    v_17 = (signed char)(((long long)result / 396137046LL) / -109LL - (long long)(
                         (unsigned int)((double)p_21 / 518.094775623) ^ 
                         p_5 * 248U));
  }
  else {
    v_23 = (short)p_5;
    v_25 = (unsigned char)(- (short)-29420);
    v_27 = (signed char)2;
  }
  if ((unsigned int)((((int)v_23 + (int)v_9) - (int)v_25) + (int)v_27) < (
      (unsigned int)(v_29 / 41) % (p_7 % 27724U + 573U) | - ((unsigned int)p_19 / (
                                                             p_5 + 412U)))) {
    v_9 = (char)55;
    v = (unsigned long long)((unsigned int)(3.31510103073e+38f / ((float)p_7 + 76.f)) * (
                             p_7 * 4294967248U) | p_5 / (unsigned int)(
                                                  (int)v_9 + 739));
    result = (int)(- ((p - p) - (double)(v >> (p_5 & 63U))));
  }
  else {
    v_13 = (unsigned short)(((733416052 & v_15) & (int)v_17) - (int)p_19 % (
                                                               ((int)p_21 | (int)v_23) + 445));
    v_11 = (short)8.07290753424e+37;
    result = (int)((long long)v_11 / (- ((long long)v_13 * 6598LL) + 791LL));
  }
  return result;
}


