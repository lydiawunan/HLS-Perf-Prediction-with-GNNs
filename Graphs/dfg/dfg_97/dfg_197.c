#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 437562114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned short p_17)
{
  unsigned int v_15;
  int v_13;
  int v_11;
  unsigned short v_9;
  unsigned long v_7;
  unsigned int v_5;
  int v;
  char result;
  v_15 = 50601U;
  v_13 = (int)p_17;
  v_11 = (int)p;
  v_9 = (unsigned short)48731;
  v_7 = (unsigned long)p;
  result = (char)104;
  v_7 = ! ((~ v_7 % (v_7 / (unsigned long)(v_13 + 664) + 274UL)) / (unsigned long)(
           (~ v_15 + (unsigned int)((int)p_17 - (int)p)) + 895U));
  v_5 = (unsigned int)((unsigned long)((int)v_9 * ((-114 + v_11) - v_11 * (int)p)) * (
                       18165UL * (4294941001UL % (unsigned long)((int)result + 909))));
  v = 117;
  result = (char)((unsigned long)((unsigned int)(~ v / ((int)p % 4333 + 613)) % (
                                  (v_5 + 4294967215U) + 659U)) + ((unsigned long)(- (
                                                                  v_5 ^ 4294939665U)) ^ ~ (
                                                                  4294965866UL % (
                                                                  v_7 + 316UL))));
  return result;
}


