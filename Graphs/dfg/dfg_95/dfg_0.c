#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 145071173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, short p_9, short p_17)
{
  unsigned char v_15;
  float v_13;
  char v_11;
  unsigned long v_6;
  unsigned long v_4;
  char v;
  unsigned int result;
  v_15 = (unsigned char)77;
  v_13 = -548092480.f;
  v_6 = 4161345461UL;
  v = (char)-77;
  v_11 = (char)((int)v_15 / (- ((int)(~ p) | ((int)v_15 | (int)((unsigned char)v_13))) + 972));
  v_15 = (unsigned char)163;
  v_4 = (unsigned long)p_9;
  result = (unsigned int)(((unsigned long)(~ v) - v_4 % (v_6 + 489UL)) % (
                          (unsigned long)(- p) % (((unsigned long)p_9 - v_6) + 640UL) + 124UL) + (unsigned long)(
                          (int)v_11 & ((int)v_13 ^ (int)v_15 % ((int)p_17 + 669))));
  return result;
}


