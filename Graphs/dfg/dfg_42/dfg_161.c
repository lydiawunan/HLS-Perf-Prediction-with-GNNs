#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 165660127
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned int p_5[4], unsigned char p_9,
                 unsigned long long p_11, unsigned char p_17)
{
  float v_15;
  int v_13;
  short v_7;
  unsigned char v;
  unsigned int result;
  v_15 = (float)p_9;
  v_13 = 53240;
  v_7 = (short)((unsigned long)(- (((int)p_17 % ((int)((unsigned char)p) + 116)) / (
                                   (int)(! p_9) + 299))) * ((unsigned long)(
                                                            3801987605U / (
                                                            (3490690218U >> (
                                                             (int)p_9 & 31)) + 648U)) - (
                                                            (unsigned long)(
                                                            (float)p_9 * v_15) - 3545234669UL)));
  result = (unsigned int)(((unsigned long long)(-429829181L >> ((int)(- v_7) & 31)) ^ (
                           (unsigned long long)((int)p_9 / ((int)((unsigned char)p) + 961)) + 
                           p_11 * 1030252233ULL)) * (unsigned long long)(
                          (v_13 << ((int)v_15 & 31)) / ((int)p_17 % 14848 + 560)));
  v = (unsigned char)p_5[3];
  result = ((result & (unsigned int)(- p)) & 24785U) * (unsigned int)v;
  return result;
}


