#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 761569909
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned int p_7, float p_9)
{
  unsigned short v_5;
  unsigned long v;
  unsigned char result;
  v_5 = (unsigned short)60320;
  v = (unsigned long)p;
  result = (unsigned char)16;
  result = (unsigned char)((unsigned int)v_5 % (~ ((unsigned int)result % (
                                                   p_7 + 781U)) / ((unsigned int)(- (- p_9)) + 328U) + 914U));
  v = (unsigned long)((long long)(43563 - (int)(~ result)) / (242890662LL * (
                                                              903739204LL / (long long)(
                                                              v + 908UL) ^ -24368LL) + 563LL));
  result = (unsigned char)v;
  result = (unsigned char)(((int)((unsigned char)4710953472.f) - (int)result) + ~ (! p));
  return result;
}


