#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741523020
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, short p_5, char p_13, float p_17)
{
  long v_15;
  unsigned long v_11;
  int v_9;
  double v_7;
  short v;
  short result;
  v_11 = 64078UL;
  v = (short)-27247;
  result = (short)16611;
  v_15 = (long)(- result);
  v_7 = (double)(- ((unsigned long)(-748017684 * ((int)p_5 * (int)((short)p_17))) + 
                    3462033771UL % (unsigned long)((unsigned int)v % 4151908923U + 680U)));
  v_9 = (int)v_15;
  result = (short)((unsigned long)((((int)result << (p & 15U)) | ((int)v + -27)) ^ 
                                   (int)((double)p_5 / (v_7 + 224.)) * ! v_9) / (
                   (157UL / (4294945824UL % (v_11 + 183UL) + 301UL)) / (
                   (unsigned long)((double)(28695L * (long)p_13) * -7285986756.83) + 598UL) + 828UL));
  return result;
}


