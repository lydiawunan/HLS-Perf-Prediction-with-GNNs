#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647389846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned char p_13)
{
  long v_10;
  unsigned int v_8;
  double v_6;
  unsigned char v_4;
  signed char v;
  short result;
  v_8 = 851855505U;
  v_4 = p;
  result = (short)27964;
  v_6 = (double)(~ (4170324607U + (unsigned int)p_13 / (v_8 + 970U)) * (unsigned int)p);
  v_10 = (long)(~ ((unsigned int)(((float)p + 1.99174519817e+38f) / (
                                  (float)(~ p_13) + 552.f)) % ((unsigned int)result * 3909306188U + 734U)));
  v = (signed char)((float)(4294929951UL + (unsigned long)((unsigned int)(
                                                           (int)v_4 / 112) + 
                                                           (unsigned int)v_6 / (
                                                           v_8 + 391U))) + 
                    ((float)v_4 * (-532.608581543f - (float)v_10)) / 631.f);
  result = (short)(! (4115575966UL / (unsigned long)((((int)v + -59) >> (
                                                      (int)(- result) & 31)) + 971)));
  return result;
}


