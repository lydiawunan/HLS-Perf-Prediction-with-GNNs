#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 595848645
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[2], float p_7, unsigned short p_9,
          unsigned int p_11)
{
  unsigned int v_5;
  char v;
  float result;
  v_5 = 33094U;
  result = (float)(~ 379243316UL);
  v = (char)((float)(4294958031UL / (p[1] + 189UL) | ((unsigned long)v_5 | 5142UL)) / (
             (result / (p_7 + 289.f)) * - result + 208.f) + (float)((unsigned long)(! (- p_9)) - 
                                                                    (unsigned long)p_11 * 4294917919UL));
  result = 277.67175293f + (float)v;
  return result;
}


