#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253975856
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p)
{
  unsigned char v_12;
  unsigned long v_10;
  int v_8;
  int v_6;
  unsigned int v_4;
  unsigned int v;
  signed char result;
  v_12 = (unsigned char)227;
  v_10 = (unsigned long)p;
  v_8 = (int)p;
  v_6 = 51878;
  v_4 = 4294951949U;
  v = 160680242U;
  result = (signed char)65;
  while (-204.474578857f <= (float)(((unsigned long)v_6 / (((unsigned long)v_8 + 687773239UL) + 937UL)) * 39UL)) {
    v = (unsigned long)v_12 * (v_10 % 236387329UL);
    v_10 = (unsigned long)((227U ^ v) / (unsigned int)((800 + (int)p) + 726) - (
                           14606U + ~ v));
    v = (unsigned int)(18446744073709549276ULL / (unsigned long long)(
                       - (v | v) + 713U));
    v_6 = 13554;
  }
  while_0_break: ;
  result = (signed char)((unsigned int)(52509 << (~ v & 15U)) - ((unsigned int)result + v_4));
  return result;
}


