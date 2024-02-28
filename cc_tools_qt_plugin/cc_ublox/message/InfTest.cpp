// Generated by commsdsl2tools_qt v6.3.0

#include "InfTest.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/InfTest.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_str(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::InfTestFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Str;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_str(false));
    return props;
}

} // namespace

class InfTestImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::InfTest<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        InfTestImpl
    >
{
public:
    InfTestImpl() = default;
    InfTestImpl(const InfTestImpl&) = delete;
    InfTestImpl(InfTestImpl&&) = delete;
    virtual ~InfTestImpl() = default;
    InfTestImpl& operator=(const InfTestImpl&) = default;
    InfTestImpl& operator=(InfTestImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfTest::InfTest() : m_pImpl(new InfTestImpl) {}
InfTest::~InfTest() = default;

InfTest& InfTest::operator=(const InfTest& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfTest& InfTest::operator=(InfTest&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

InfTest::MsgIdParamType InfTest::doGetId()
{
    return ::cc_ublox::message::InfTest<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* InfTest::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfTest::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfTest::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfTest::resetImpl()
{
    m_pImpl->reset();
}

bool InfTest::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const InfTest*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfTest::MsgIdParamType InfTest::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfTest::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfTest::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfTest::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfTest::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfTest::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin