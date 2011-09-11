
#pragma once


namespace clutl
{
	class DataBuffer
	{
	public:
		DataBuffer(unsigned int size);
		~DataBuffer();

		void Reset();

		void Write(const void* data, unsigned int length);
		void WriteAt(const void* data, unsigned int length, unsigned int position);

		void Read(void* data, unsigned int length);
		const char* ReadAt(unsigned int position) const;

		void SeekAbs(unsigned int position);
		void SeekRel(int offset);
		void SeekEnd(int offset);

		unsigned int GetPosition() const { return m_Position; }

	private:
		char* m_Data;
		unsigned int m_Size;
		unsigned int m_Position;
	};
}