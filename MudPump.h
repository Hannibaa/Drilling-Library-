#pragma once
#include <string>

struct mpLiner {

	float m_MaxPressureLiner;
};

class _MadPump_ {

public:
	void     setFlow        (float _gpm);
	void     setFlow        (uint16_t _spm);
	uint16_t getSPM         () const;
	float    getFlow        () const;
	void     resetStrokes   ();
	void     getTotalStrokes();
	float    getSetPopValve () const;

};

struct _MadPump_data {

	float m_Output;
	mpLiner m_Liner;
	int   m_TotalStrokes;
	float m_PopValve_setPressure;


	bool is_manifold_lineup = true;
	bool is_Master_valv_open = true;
	bool is_BleedOff_open = false;
	bool is_PopValve_installed = true;
	bool is_Supercharging_lineup = true;


};

class _MadPump_info {
public:

	std::string mpi_Name;
	std::string mpi_Model;
	std::string mpi_Version;
	float mpi_Stroke;
	float mpi_Weight;

};