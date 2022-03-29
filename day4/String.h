 // Fig. 11.9: String.h
  // String class definition.
  #ifndef STRING_H
  #define STRING_H

  #include <iostream>
  using std::ostream;
  using std::istream;

  class String
  {
     friend ostream &operator<<( ostream &, const String & );
     friend istream &operator>>( istream &, String & );
  public:
     String( const char * = "" ); // conversion/default constructor
     String( const String & ); // copy constructor                 
     ~String(); // destructor                                      

     const String &operator=( const String & ); // assignment operator    
     const String &operator+=( const String & ); // concatenation operator

     bool operator!() const; // is String empty?              
     bool operator==( const String & ) const; // test s1 == s2
     bool operator<( const String & ) const; // test s1 < s2  

     // test s1 != s2                            
     bool operator!=( const String &right ) const
     {                                           
        return !( *this == right );              
     } // end function operator!=                

     // test s1 > s2                            
     bool operator>( const String &right ) const
     {                                          
        return right < *this;                   
     } // end function operator>                

     // test s1 <= s2                            
     bool operator<=( const String &right ) const
     {                                           
        return !( right < *this );               
     } // end function operator <=               

     // test s1 >= s2                            
     bool operator>=( const String &right ) const
     {                                           
        return !( *this < right );               
     } // end function operator>=                

     char &operator[]( int ); // subscript operator (modifiable lvalue)
     char operator[]( int ) const; // subscript operator (rvalue)      
     String operator()( int, int = 0 ) const; // return a substring    
     int getLength() const; // return string length
  private:
     int length; // string length (not counting null terminator)
     char *sPtr; // pointer to start of pointer-based string

     void setString( const char * ); // utility function
  }; // end class String

  #endif
