#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 398959053
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned char p_7, long p_11, short p_13,
                  unsigned int p_15)
{
  double v_21;
  float v_19;
  char v_17;
  signed char v_9;
  unsigned char v_4;
  double v;
  unsigned long result;
  v_21 = (double)p;
  v_19 = 219.056350708f;
  v_9 = (signed char)p_15;
  v = -3807423378.78;
  result = (unsigned long)p_15;
  v_17 = (char)(~ (((unsigned long)p_13 % (result + 899UL) - (unsigned long)(
                    p_11 / ((long)v_19 + 543L))) % (unsigned long)((unsigned int)(
                                                                   v - v_21) * - p_15 + 887U)));
  v_4 = (unsigned char)(p_11 - (long)((int)((char)((double)((int)p_13 & (int)p_13) + (
                                                   (double)p_15 + 757.725061705))) - (int)v_17));
  v_4 = (unsigned char)(((unsigned long)(~ (! v_4)) - (unsigned long)(
                                                      541472592 % ((int)p_7 + 21)) * (
                                                      (unsigned long)p_7 + 888451499UL)) + (unsigned long)(
                        (int)(-4218750720.f / ((float)p_7 + 462.f) - 349.942108154f) | (
                        (int)v_9 - 62439 % ((int)v + 377))));
  result = (unsigned long)(((unsigned int)((int)((unsigned short)v) << 14) - 
                            3644788994U / (unsigned int)((int)v_4 + 646)) + (unsigned int)p);
  return result;
}


