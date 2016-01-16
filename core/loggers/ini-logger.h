#pragma once

#include <core/interfaces/ilogger.h>

#include <QSettings>

namespace Logger {

	class IniLogger final : public Interface::ILogger {
	public:
		explicit IniLogger(const QString &name);
		virtual ~IniLogger() = default;

		virtual Enum::LoggerType type() const override;

		virtual void init(Interface::ITestCase *) override;
		virtual void done(Interface::ITestCase *, double duration) override;

	private:
		QSettings m_file;

	};

}