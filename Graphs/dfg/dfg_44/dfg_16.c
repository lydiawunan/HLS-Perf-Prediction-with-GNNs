#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 284253490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned char p_5, float p_11[5][5],
                  unsigned int p_13)
{
  unsigned int v_9;
  double v_7;
  unsigned short v;
  unsigned long result;
  v_9 = 34520U;
  result = 32565UL;
  v = (unsigned short)((4679249ULL - (unsigned long long)((v_9 * 10014U) / (
                                                          (unsigned int)(- p) + 152U))) - (unsigned long long)(
                       - (-40567LL % ((long long)p_11[0][4] + 476LL)) - (long long)(
                       ((unsigned int)p_5 + p_13) - (unsigned int)(20436176 * (int)p_5))));
  v_7 = (double)((int)v ^ (int)((unsigned short)(- ((float)(v_9 / 121U) * (
                                                    15838.f * p_11[2][4])))));
  v = (unsigned short)(- (- (- ((double)p_5 + v_7))));
  result = (unsigned long)(- p) / ((result + 616UL) % (result / 3396984976UL + 456UL) + 571UL) ^ (unsigned long)(- (
           ((int)v % 97) / 246));
  return result;
}


