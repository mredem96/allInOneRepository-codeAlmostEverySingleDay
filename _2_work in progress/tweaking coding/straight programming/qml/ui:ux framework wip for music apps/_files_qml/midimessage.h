#ifndef MIDIMESSAGE_H

class midiMessage {

    typedef void (*midiMessageCallback)( double timeStamp, std::vector<unsigned char> *message, void *userData);

    midiMessage( const std::string& message, Type type = RtMidiError::UNSPECIFIED ) throw() : message_(message), type_(type) {}

    virtual ~midiMessage( void ) throw() {}

    ~midiMessageOut ( void ) throw();

    virtual void midiMessage( void ) throw() {}

    midiMessage::chooseMidiPort( void ) throw();
    midiMessage::midiCCconstructor( void ) throw();
    midiMessage::midiPGMChangConstructor( void ) throw();


};

#define MIDIMESSAGE_H

#endif // MIDIMESSAGE_H
