#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 195623735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, char p_11, unsigned char p_15)
{
  unsigned short v_13;
  unsigned long long v_9;
  char v_7;
  int v_4;
  unsigned int v;
  int result;
  v_13 = (unsigned short)p_15;
  v_4 = (int)p;
  result = -35393;
  v_7 = (char)((225 % (- (v_4 * result) + 512)) * 29);
  v_9 = (unsigned long long)(-629523427 ^ ((int)(- p_11) * (int)(- v_13) - ! (
                                           result + (int)p_15)));
  v = (unsigned int)(~ ((unsigned long long)v_4 % ((unsigned long long)p * 233227603ULL + 705ULL)) % (
                     (((unsigned long long)v_7 ^ (3682ULL - v_9)) - 4294967295ULL) + 952ULL));
  result = (int)(- (~ v));
  return result;
}


