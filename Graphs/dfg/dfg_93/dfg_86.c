#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 142734959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned long long p_7, short p_15)
{
  unsigned char v_13;
  float v_11;
  float v_9;
  signed char v_5;
  unsigned short v;
  unsigned short result;
  v_13 = (unsigned char)225;
  v_11 = -3755033344.f;
  v = (unsigned short)43426;
  result = (unsigned short)p_15;
  v_5 = (signed char)(((p_7 + (unsigned long long)p_15) & 267122535ULL) / (unsigned long long)(
                      (int)p_15 + 715));
  v_9 = (float)(((unsigned int)(- ((int)result ^ 67)) | 4294910232U) / (
                (unsigned int)((float)((unsigned long)v * (p >> ((int)v_13 & 31))) - 923.291442871f) + 264U));
  result = (unsigned short)(- ((float)(! p) / ((v_9 + v_11) + 101.f)) / (
                            (float)(p_7 - - (p_7 / (unsigned long long)(
                                             (int)v_13 + 878))) + 462.f));
  result = (unsigned short)(p / ((p - (unsigned long)v) * (unsigned long)v_5 + 569UL) << (
                            - (- ((unsigned long long)result + p_7)) & 31ULL));
  return result;
}


