#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 334253465
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_9, long p_11, unsigned int p_13,
        unsigned char p_17)
{
  char v_19;
  unsigned long v_15;
  float v_7;
  unsigned int v_5;
  int v;
  int result;
  v_19 = (char)-107;
  v_15 = 4009710490UL;
  v_7 = (float)p_11;
  v_5 = (unsigned int)p_17;
  v = -963224488;
  result = (int)p;
  if (~ (~ ((int)((unsigned char)v_7) / ((int)p_17 + 222))) >= (int)(
                                                               - p - (float)(
                                                               (unsigned long)p_11 * (unsigned long)v_5)) + 
                                                               64476 % (
                                                               (int)v_19 / -25 + 123)) {
    v_5 = (unsigned int)(! ((int)v_19 + result));
    v_7 = (float)((unsigned int)((int)p_17 % -18352)) / -262.577789307f;
    v = (int)((unsigned long)(-31 - (v + 28876)) / ((unsigned long)((int)p_9 >> (
                                                                    p_13 & 15U)) * v_15 + 274UL));
  }
  else {
    v = (int)(- ((float)(2911U % (p_13 + 581U)) + ((float)p_11 + v_7)));
    v_7 = (float)4294965012U;
    v_5 = (unsigned int)((double)(- (p + (float)p_13)) * (-5158320852.18 / (double)(
                                                          - p + 1019.f)));
  }
  if ((unsigned long)v > ((unsigned long)(v_5 + (unsigned int)((int)((unsigned short)v_7) | 62603)) ^ (unsigned long)(
                          (long)p_9 % (~ p_11 + 801L)))) result = (int)p;
  else result = (int)(! (signed char)68);
  return result;
}


