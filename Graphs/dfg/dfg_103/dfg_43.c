#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 819266009
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, long p_5, unsigned int p_7, long long p_9,
                  long long p_11)
{
  unsigned short v_21;
  unsigned int v_19;
  char v_17;
  float v_15;
  char v_13;
  int v;
  unsigned long result;
  v_21 = (unsigned short)p_5;
  v_19 = 13498U;
  v_15 = (float)p;
  v_13 = (char)-76;
  v_17 = (char)((long long)((unsigned int)v_13 / (v_19 + 612U)) + (long long)(- (
                                                                  (int)v_21 - (int)((unsigned short)v_15))) / (
                                                                  - (~ p_9) + 128LL));
  v = (int)(- (- (((double)v_15 / 1.24299183264e+38) / ((double)(p_7 + (unsigned int)v_17) + 299.))));
  v = (int)(((long long)(! v - (int)p) + (((long long)p_7 - p_9) - - p_11)) % (
            ((p_9 / -20778LL & ! p_9) - (long long)((unsigned long)(388019386U >> (
                                                                    (int)v_13 & 31)) + (unsigned long)p_5)) + 777LL));
  result = (unsigned long)(43218LL % (((long long)(~ ((int)p * v)) & ! (
                                       96243170LL + (long long)p_5)) + 796LL));
  return result;
}


